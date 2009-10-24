\new StaffGroup = "guitarra" << 
	%\set Staff.instrumentName = "Guitarra"
	%\set Staff.shortInstrumentName = "G."
	%\set Score.skipBars = ##t
	%\set Staff.printKeyCancellation = ##f
	%\new Voice \global
	%\new Voice \globalTempo
	%\context Voice = "voice 6" {
	\new Staff {
		\set Staff.instrumentName = "Guitarra"
		\set Staff.shortInstrumentName = "G."
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key a \minor

		< a c' a, > 8 e < a c' > e  |
		< g, c' g > 8 e < c' g > e  |
		< f, c' a > 8 f < c' a > f  |
		< b gis e, > 16 e gis e e' b gis b  |
		%% 5
		< e, b, d gis b e' > 2  |
		< c' a a, > 8 e' 16 d' e' d' a c'  |
		< c' g g, > 8 d' 16 g e' d' g d'  |
		< c' a f, > 16 c f a c' f' a c'  |
		g, 8 b 16 b, d g b g'  |
		%% 10
		< a, c' a > 8 e' 16 c' a c' e a  |
		< g, b g > 8 b 16 g e' b g b  |
		< f, c' a > 16 c f a c' f' a c'  |
		g, 8 e 16 g b d' b g'  |
		< c g c' > 8 e' 16 d' g e' d' g  |
		%% 15
		< g, g c' > 8 d' 16 g e' d' g d'  |
		< f, a c' > 16 c f a c' f' a c'  |
		g, 8 b 16 b, d g b g'  |
		< c' g c > 8 e' 16 d' g e' d' g  |
		< g, g b > 8 b 16 g e' b g b  |
		%% 20
		< f, a c' > 16 c f a c' f' a c'  |
		g, 8 e 16 g b d' b g'  |
		< g, b, d g b g' > 2  |
		R2*84  |
		\bar "|."
	} % Voice
	\new TabStaff {
		\override Stem #'transparent = ##t
		\override Stem #'length = #0
		\set autoBeaming = ##f
		\override Staff.Rest #'break-visibility = #all-invisible

		< a c' a, > 8 e < a c' > e  |
		< g, c' g > 8 e < c' g > e  |
		< f, c' a > 8 f < c' a > f  |
		< b gis e, > 16 e gis e e' b gis b  |
		%% 5
		< e, b, d gis b e' > 2  |
		< c' a a, > 8 e' 16 d' e' d' a c'  |
		< c' g g, > 8 d' 16 g e' d' g d'  |
		< c' a f, > 16 c f a c' f' a c'  |
		g, 8 b 16 b, d g b g'  |
		%% 10
		< a, c' a > 8 e' 16 c' a c' e a  |
		< g, b g > 8 b 16 g e' b g b  |
		< f, c' a > 16 c f a c' f' a c'  |
		g, 8 e 16 g b d' b g'  |
		< c g c' > 8 e' 16 d' g e' d' g  |
		%% 15
		< g, g c' > 8 d' 16 g e' d' g d'  |
		< f, a c' > 16 c f a c' f' a c'  |
		g, 8 b 16 b, d g b g'  |
		< c' g c > 8 e' 16 d' g e' d' g  |
		< g, g b > 8 b 16 g e' b g b  |
		%% 20
		< f, a c' > 16 c f a c' f' a c'  |
		g, 8 e 16 g b d' b g'  |
		< g, b, d g b g' > 2  | \break
	}
>> % Staff ends
