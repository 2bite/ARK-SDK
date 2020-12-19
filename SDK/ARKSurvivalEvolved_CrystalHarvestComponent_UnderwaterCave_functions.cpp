// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalHarvestComponent_UnderwaterCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalHarvestComponent_UnderwaterCave.CrystalHarvestComponent_UnderwaterCave_C.ExecuteUbergraph_CrystalHarvestComponent_UnderwaterCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCrystalHarvestComponent_UnderwaterCave_C::ExecuteUbergraph_CrystalHarvestComponent_UnderwaterCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalHarvestComponent_UnderwaterCave.CrystalHarvestComponent_UnderwaterCave_C.ExecuteUbergraph_CrystalHarvestComponent_UnderwaterCave");

	UCrystalHarvestComponent_UnderwaterCave_C_ExecuteUbergraph_CrystalHarvestComponent_UnderwaterCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
