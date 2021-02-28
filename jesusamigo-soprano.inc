\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "voice 1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor

		R2*4  |

		%% 5
		r8 r16 e' c' b a g  |
		a 8 g 16 a ~ a c' 8 c' 16 ~  |
		c' 16 b 8. r8 a 16 g  |
		a 8 g 16 a ~ a c' 8 b 16 ~  |
		b 8 r16 e' c' b a g  |
		%% 10
		a 8 g 16 a ~ a c' 8 c' 16 ~  |
		c' 16 b 8. r8 a 16 g  |
		a 8 g 16 a ~ a c' 8 d' 16 ~  |
		d' 8 r16 g e' d' c' d'  |
		e' 8 d' 16 e' ~ e' g' 8 d' 16 ~  |
		%% 15
		d' 8 c' 16 d' ~ d' g' 8 c' 16 ~  |
		c' 8 a 16 c' ~ c' e' 8 d' 16 ~  |
		d' 8 r16 g e' d' c' d'  |
		e' 8 d' 16 e' ~ e' g' 8 d' 16 ~  |
		d' 8 c' 16 d' ~ d' g' 8 c' 16 ~  |
		%% 20
		c' 8 a 16 c' ~ c' e' 8 d' 16 ~  |
		d' 4 r  |
		r8 r16 e' c' b a g  |
		a 8 g 16 a ~ a c' 8 c' 16 ~  |
		c' 16 b 8. r8 a 16 g  |
		%% 25
		a 8 g 16 a ~ a c' 8 d' 16 ~  |
		d' 8 r16 g e' d' c' d'  |
		e' 8 d' 16 e' ~ e' g' 8 d' 16 ~  |
		d' 8 c' 16 d' ~ d' g' 8 c' 16 ~  |
		c' 8 a 16 c' ~ c' e' 8 d' 16 ~  |
		%% 30
		d' 8 r r r16 d'  |
		d' 8 e' 16 f' ~ f' g' 8 g' 16 ~  |
		g' 4 r8 r16 c'  |
		a' 8 g' 16 f' ~ f' e' c' d' ~  |
		d' 4 r8 r16 g  |
		%% 35
		e' 8 f' 16 e' ~ e' 8 b 16 c' ~  |
		c' 8 c' c' a 16 c' ~  |
		c' 8 d' e' e' ~  |
		e' 8 d' r r16 d'  |
		d' 8 e' 16 f' ~ f' g' 8 g' 16 ~  |
		%% 40
		g' 4 r8 r16 c'  |
		a' 8 g' 16 f' ~ f' e' c' d' ~  |
		d' 4 r8 r16 e'  |
		e' 8 f' 16 e' ~ e' b 8 c' 16 ~  |
		c' 8 c' c' a 16 c' ~  |
		%% 45
		c' 8 d' e' e' ~  |
		e' 8 d' r4  |
		R2*8  |
		%% 55
		r8 r16 e' c' b a g  |
		a 8 g 16 a ~ a c' 8 c' 16 ~  |
		c' 16 b 8. r8 a 16 g  |
		a 8 g 16 a ~ a c' 8 b 16 ~  |
		b 8 r16 e' c' b a g  |
		%% 60
		a 8 g 16 a ~ a c' 8 c' 16 ~  |
		c' 16 b 8. r8 r16 g  |
		a 8 g 16 a ~ a c' 8 d' 16 ~  |
		d' 8 r16 g e' d' c' d'  |
		e' 8 d' 16 e' ~ e' g' 8 d' 16 ~  |
		%% 65
		d' 8 c' 16 d' ~ d' g' 8 c' 16 ~  |
		c' 8 a 16 c' ~ c' e' 8 d' 16 ~  |
		d' 8 r16 g e' d' c' d'  |
		e' 8 d' 16 e' ~ e' g' 8 d' 16 ~  |
		d' 8 c' 16 d' ~ d' g' 8 c' 16 ~  |
		%% 70
		c' 8 a 16 c' ~ c' e' 8 d' 16 ~  |
		d' 4 r8 r16 d'  |
		d' 8 e' 16 f' ~ f' g' 8 g' 16 ~  |
		g' 4 r8 r16 c'  |
		a' 8 g' 16 f' ~ f' e' c' d' ~  |
		%% 75
		d' 4 r8 r16 g  |
		e' 8 f' 16 e' ~ e' 8 b 16 c' ~  |
		c' 8 c' c' a 16 c' ~  |
		c' 8 d' e' e' ~  |
		e' 8 d' r r16 d'  |
		%% 80
		d' 8 e' 16 f' ~ f' g' 8 g' 16 ~  |
		g' 4 r8 r16 c'  |
		a' 8 g' 16 f' ~ f' e' c' d' ~  |
		d' 4 r8 r16 e'  |
		e' 8 f' 16 e' ~ e' b 8 c' 16 ~  |
		%% 85
		c' 8 c' c' a 16 c' ~  |
		c' 8 d' e' e' ~  |
		e' 8 d' r r16 d'  |
		d' 8 e' 16 f' ~ f' g' 8 g' 16 ~  |
		g' 4 r8 r16 c'  |
		%% 90
		a' 8 g' 16 f' ~ f' e' c' d' ~  |
		d' 4 r8 r16 g  |
		e' 8 f' 16 e' ~ e' 8 b 16 c' ~  |
		c' 8 c' c' a 16 c' ~  |
		c' 8 d' e' e' ~  |
		%% 95
		e' 8 d' r r16 e'  |
		e' 8 fis' 16 g' ~ g' a' 8 a' 16 ~  |
		\key d \major
		a' 4 r8 r16 d'  |
		b' 8 a' 16 g' ~ g' fis' d' e' ~  |
		e' 4 r8 r16 fis'  |
		%% 100
		fis' 8 g' 16 fis' ~ fis' cis' 8 d' 16 ~  |
		d' 8 d' d' b 16 d' ~  |
		d' 8 e' fis' fis' ~  |
		fis' 8 e' r4  |
		r4 r8 r16 d'  |
		%% 105
		d' 2 ~  |
		d' 2  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voice 1" {
		Hoy te quie -- ro con -- tar, Je -- sús a -- mi -- go,
		que con -- ti -- "go es" -- toy fe -- liz.

		Si ten -- go "tu a" -- mis -- tad lo ten -- go to -- do
		pues es -- tás den -- tro de mí.

		Des -- pués de co -- mul -- gar me ha -- ces co -- mo tú, me lle -- nas con tu paz.
		En ca -- da pe -- da -- ci -- to "de es" -- te pan, com -- ple -- "to es" -- tás, "y a" -- sí te das.

		Es -- tás a -- hí por mí, por -- que co -- no -- ces que sin ti pe -- que -- ño soy.
		"De a" -- ho -- "ra en" a -- de -- lan -- te na -- da nos se -- pa -- ra -- rá, ya lo ve -- rás.

		"Te es" -- con -- des en el pan, "y aun" -- que no te pue -- do ver
		te pue -- "do a" -- com -- pa -- ñar, es mi lu -- gar pre -- fe -- ri -- do.

		Hoy quie -- ro co -- mul -- gar, a -- brir -- te mi co -- ra -- zón,
		"y a" -- sí de par en par, e -- res mi me -- jor a -- mi -- go.

		Dos mil a -- ños a -- trás a tus a -- mi gos in -- vi -- tas -- te a ce -- nar,
		"y a" -- hí les pro -- me -- tis -- te que con e -- llos por siem -- "pre i" -- bas "a es" -- tar.

		"Y a" -- ho -- ra ca -- da vez "que el" sa -- cer -- do -- "te e" -- le -- "va el" pan en el al -- tar
		me pon -- go de ro -- di -- llas por -- que sé "que en" e -- sa hos -- tia tú es -- tás.

		"Te es" -- con -- des en el pan, "y aun" -- que no te pue -- do ver
		te pue -- "do a" -- com -- pa -- ñar, es mi lu -- gar pre -- fe -- ri -- do.

		Hoy quie -- ro co -- mul -- gar, a -- brir -- te mi co -- ra -- zón,
		a -- sí de par en par, e -- res mi me -- jor a -- mi -- go.

		Me vuel -- ves a sal -- var co -- mo "lo hi" -- cis -- "te en" la cruz.
		En ca -- da mi -- sa tú re -- pi -- tes tu sa -- cri -- fi -- cio.

		Hoy quie -- ro co -- mul -- gar, a -- brir -- te mi co -- ra -- zón,
		a -- sí de par en par, e -- res mi me -- jor a -- mi -- go,
		Je -- sús.
	}

>> % Staff ends
