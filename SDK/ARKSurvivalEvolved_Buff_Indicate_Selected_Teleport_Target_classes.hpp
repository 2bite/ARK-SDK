#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Indicate_Selected_Teleport_Target_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C
// 0x0048 (0x09A8 - 0x0960)
class ABuff_Indicate_Selected_Teleport_Target_C : public ABuff_Base_C
{
public:
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x0960(0x0040) (Transient, DuplicateTransient)
	class APlayerController*                           K2Node_CustomEvent_NewParam;                              // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C");
		return ptr;
	}


	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void UserConstructionScript();
	void toggle_active_on_targeting_client(class APlayerController* NewParam);
	void ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
