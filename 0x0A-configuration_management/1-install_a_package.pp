#!/usr/bin/pup
# install flas and puppt version 2.1.0
package {'flask':
  ensure   => '2.1.0',
  provider => 'pip3'
}
