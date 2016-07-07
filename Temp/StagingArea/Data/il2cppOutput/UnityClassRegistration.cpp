struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 64 classes
	//0. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//13. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//20. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//21. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//25. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//26. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//27. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//28. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//29. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//30. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//31. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//32. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//33. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//34. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//35. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//36. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//37. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//38. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//39. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//40. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//41. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//42. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//43. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//44. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//45. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//46. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//47. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//48. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//49. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//50. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//51. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//52. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//53. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//54. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//55. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//56. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//57. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//58. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//59. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//60. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//61. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//62. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//63. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
