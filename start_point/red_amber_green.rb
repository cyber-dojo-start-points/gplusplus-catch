
lambda { |stdout,stderr,status|
  output = stdout + stderr
  # Catch ends a run that had failures with a summary whose counts are
  # separated by " | ", as in "assertions: 1 | 1 failed" and
  # "assertions: 3 | 2 passed | 1 failed". The pipes are escaped so they
  # are read as that separator rather than as alternation, which would make
  # this match any output holding the words on either side of one.
  return :red   if /^assertions: \d+ \|.* \d+ failed/.match(output)
  return :red   if /failed \(\d+ assertion/.match(output)
  return :green if /All tests passed/.match(output)
  return :amber
}
