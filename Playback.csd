<CsoundSynthesizer>
<CsInstruments>
instr testing
 a1 oscili 10000, p5, 1
 k1 linen 1, .2, p3, .3
 out a1 * k1
endin
</CsInstruments>
<CsScore>
f 1  0 8192 10   1 ; GEN10 to compute a sine wave
i "testing" 0 1.000000 0 440.000000
i "testing" 1 0.500000 0 493.880005
i "testing" 2 0.300000 0 523.250000
i "testing" 3 0.300000 0 587.330017
i "testing" 4 1.000000 0 659.250000
i "testing" 5 0.300000 0 698.460022
i "testing" 6 0.300000 0 783.989990
i "testing" 7 0.500000 0 440.000000
i "testing" 8 0.500000 0 587.330017
i "testing" 9 1.000000 0 523.250000
i "testing" 10 0.300000 0 659.250000
i "testing" 11 1.000000 0 783.989990
e 0.1
</CsScore>
</CsoundSynthesizer>
