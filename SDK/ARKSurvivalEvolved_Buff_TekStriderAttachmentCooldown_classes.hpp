#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStriderAttachmentCooldown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekStriderAttachmentCooldown.Buff_TekStriderAttachmentCooldown_C
// 0x0008 (0x0980 - 0x0978)
class ABuff_TekStriderAttachmentCooldown_C : public APrimalBuff
{
public:
	class UClass*                                      AttachmentBuffClass;                                      // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStriderAttachmentCooldown.Buff_TekStriderAttachmentCooldown_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekStriderAttachmentCooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
