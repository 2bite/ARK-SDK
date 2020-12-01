#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BogSpiderBioGrappleEscape_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C
// 0x0258 (0x0B88 - 0x0930)
class ABuff_BogSpiderBioGrappleEscape_C : public ABuff_Base_C
{
public:
	struct FHUDElement                                 HudElement_StrugglePercent;                               // 0x0930(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_Warning;                                       // 0x09F8(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_Success;                                       // 0x0AC0(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
