#ifndef GRAPHICSETTINGS_H
#define GRAPHICSETTINGS_H

namespace Engine
{
	class GraphicsSettings
	{
	private:

		/* Variables */
		static GraphicsSettings* sInstance;
		static gfxSettings mSettings;		
		static float FPS_Limit;

		/* Constructor / Destructor */
		GraphicsSettings();
		~GraphicsSettings();

	public:
		/* Instancers */
		static GraphicsSettings* instance();
		static void release();

		/* Accessors */
		const static float FPS();
		const static gfxSettings get();

		/* Functions */
		bool save() const;
		void load();
		void reload();
	};
}
#endif
