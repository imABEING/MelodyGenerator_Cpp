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
i "testing" 0 2.000000 0 440.000000
i "testing" 1 3.333333 0 440.000000
i "testing" 2 2.666667 0 440.000000
i "testing" 3 2.666667 0 587.330017
i "testing" 4 0.666667 0 587.330017
i "testing" 5 2.000000 0 587.330017
i "testing" 6 3.333333 0 523.250000
i "testing" 7 2.666667 0 523.250000
i "testing" 8 2.666667 0 523.250000
i "testing" 9 3.333333 0 493.880005
i "testing" 10 0.666667 0 493.880005
i "testing" 11 0.666667 0 493.880005
e 0.1
</CsScore>
</CsoundSynthesizer>
