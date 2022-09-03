#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MainMenu_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0038 (0x04A8 - 0x0470)
class AMainMenu_C : public ALevelScriptActor
{
public:
	float                                              Counter;                                                  // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class USphereReflectionCaptureComponent*           CaptureComp;                                              // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMainMenuUI_C*                               CallFunc_Create_ReturnValue;                              // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue;                     // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance;                 // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0498(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	class AMatineeActor*                               MatineeActor_0_ExecuteUbergraph_MainMenu_RefProperty;     // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}


	void K2Node_MatineeController_1_MatineeEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
