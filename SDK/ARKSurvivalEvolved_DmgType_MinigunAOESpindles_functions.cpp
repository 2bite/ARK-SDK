// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_MinigunAOESpindles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C.BPAdjustHarvestingDamage_1
// ()

void UDmgType_MinigunAOESpindles_C::BPAdjustHarvestingDamage_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C.BPAdjustHarvestingDamage_1");

	UDmgType_MinigunAOESpindles_C_BPAdjustHarvestingDamage_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
