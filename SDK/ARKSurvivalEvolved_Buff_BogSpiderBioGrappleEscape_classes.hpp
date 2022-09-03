#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x03F0 (0x0D68 - 0x0978)
class ABuff_BogSpiderBioGrappleEscape_C : public ABuff_Base_C
{
public:
	struct FHUDElement                                 HudElement_StrugglePercent;                               // 0x0978(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_Warning;                                       // 0x0AC8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_Success;                                       // 0x0C18(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)

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
