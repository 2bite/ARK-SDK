#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStriderAttachmentCooldownOmnishield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekStriderAttachmentCooldownOmnishield.Buff_TekStriderAttachmentCooldownOmnishield_C
// 0x0008 (0x0968 - 0x0960)
class ABuff_TekStriderAttachmentCooldownOmnishield_C : public APrimalBuff
{
public:
	class UClass*                                      AttachmentBuffClass;                                      // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStriderAttachmentCooldownOmnishield.Buff_TekStriderAttachmentCooldownOmnishield_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekStriderAttachmentCooldownOmnishield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
