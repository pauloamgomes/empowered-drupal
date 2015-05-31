#!/bin/sh
#
# @Author: Paulo Gomes <pauloamgomes@gmail.com>
#

exit_error () {
  echo $1
  exit 1
}

check_args () {
  if [ $# != 1 ]; then
    echo "Invalid number of arguments"
    echo "Usage: $0 <destination_dir>"
    exit 1
  fi
}

check_args $@

echo
echo '                                            ▓▄                                      '
echo '                                           ╬▓▓▄                                     '
echo '                                         ,▓▓▓▓▓▓                                    '
echo '                                        ▄▓▓▓▓▓▓▓▓▄                                  '
echo '                                      ▄▓▓▓▓▓▓▓▓▓▓▓▓µ                                '
echo '                                    ╓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓,                              '
echo '                                  ▄▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╕                            '
echo '                                ▄▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╕                          '
echo '                              ╓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▌                         '
echo '                             ╓▓▓▓▓▓▓▓▓▓▓█▀.     ╙█▓▓▓▓▓▓▓▓▓▓                        '
echo '                            ╒▓▓▓▓▓▓▓▓▓█  ▄▓▓▓▓▓▓▄  ▓▓▓▓▓▓▓▓▓▓                       '
echo '                            ╫▓▓▓▓▓▓▓▓▓  █▓▓▓▓▓▓▓▓▌  ▓▓▓▓▓▓▓▓▓O                      '
echo '                            ▓▓▓▓▓▓▓▓▓▌              ▓▓▓▓▓▓▓▓▓▌                      '
echo '                            ▓▓▓▓▓▓▓▓▓▌  █▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓Θ                      '
echo '                            ▐▓▓▓▓▓▓▓▓▓▄  ▀▓▓▓▓▓▓▓▀▀▓▓▓▓▓▓▓▓▓▓                       '
echo '                             █▓▓▓▓▓▓▓▓▓▓▄,       ╓▓▓▓▓▓▓▓▓▓▓▀                       '
echo '                              ▀▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓Γ                        '
echo '                               ╙▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█                          '
echo '                                 ╙█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▀                            '
echo '                                    ╙▀█▓▓▓▓▓▓▓▓▓▓▓▓█▀`                              '
echo '                       ,,,,------╥⌐        ΓΓΓΓ`      ╥╖-----,,,,                   '
echo '    ╓▄▄▄▄▄▄▄░░░░░░░░░░░░░░░░░░░░╢Ñ            ,       ╙▄░░░░░░░░░░░░░░░░░░░░░▄▄▄▄▄▄╓'
echo '       ΓΓ▀▀▀██▓▓▓▓▓▌▄▄▄░░░░░░░░▒`      ,╦▄▄▓██▒É╜`      ▒▄░░░░░░░░▄▄▄▓▓▓▓▓███▀▀ΓΓ   '
echo '                    Γ▀░░░░░░░▒Γ  =⌂²╙ └╨ΣΓ               └▒▄░░░░░░▀ΓΓ               '
echo '                   ,╦░░░░░░░░░╦╦╥╖-,                ,--╥╦╦╦░░░░░░░░╪-               '
echo '                 .╗░░░░░░░░ÜÜ░░░░░░░░░░▄▄▄░░░░½▄▄Q░░░░░░░░░░Ü░░░░░░░░╦-             '
echo '                ╥░▄▄▄▄▄▄▄▌▓▓▓▓▓▓▓▓█████▀▀▀▀▀▀▀▀▀▀▀████▓▓▓▓▓▓▓▓▌▄▄▄▄▄▄▄░Q,           '
echo '              @███▀▀▀▀▀ΓΓΓ                                   `Γ`Γ▀▀▀▀▀███▒          '
echo '                                                                                    '
echo '                                                                                    '
echo '           ,         ,,           ,,,    ,    ,          ,                          '
echo '       ▓▓███▀ ▓▓▓▌  ▓▓▓▌ ▓▓██▓▓ ▄▓▓██▓▓▄ ▓▓  ▓▓▓ ╓▓▓]▓▓███Γ ▓▓██▓▓ █▓████ █▓▓██▓▓µ  '
echo '       ▓▓▓▓▓▄ ▓▓▀▓Q╬▓╬▓▌ ▓▓▓▓▓█▐▓▌    █▓Θ╚▓▌╬▓δ▓▄╫▓ ]▓▓▓▓▓µ ▓▓▓▓▓▓ █▓▓▓▓▌ █▓Θ  ╘▓▓  '
echo '       ▓▓▄▄▄, ▓▓⌐█▓▓Σ╟▓▌ ▓▓     ▓▓▄,,▄▓▓  █▓▓▀ █▓▓▌ ]▓▓▄▄▄, ▓▓╙▓▓╕ █▓▄▄▄, █▓▄,▄▓▓▀  '
echo '       ▀█████ ▀█  █▀ ╚█Γ █▀      ╙█▓▓█▀    █▀   ██  `█████▀ █▌  ██C▀█████ ╚████▀    '
echo '                                                                                    '
echo


echo "Building on $1 ..."
echo

drush make --prepare-install make/build-empowered.make $1 || exit_error "Drush make execution failed! Cannot continue."

echo
echo "Build done! Preparing profile ..."
echo

cp -r profile $1/profiles/empowered || exit_error "Error on copying profile to $1/profiles/empowered"
cd $1
cp sites/default/default.settings.php sites/default/settings.php
chmod 0666 sites/default/settings.php

echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
echo "Almost done! Just perform below steps"
echo
echo "  - Configure your webserver to point your document root to $1"
echo "  - Create a new database"
echo
echo "And you are ready to start your empowered drupal installation"
echo

exit 0
