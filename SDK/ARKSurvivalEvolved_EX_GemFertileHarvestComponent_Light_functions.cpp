// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_GemFertileHarvestComponent_Light_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_GemFertileHarvestComponent_Light.EX_GemFertileHarvestComponent_Light_C.ExecuteUbergraph_EX_GemFertileHarvestComponent_Light
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEX_GemFertileHarvestComponent_Light_C::ExecuteUbergraph_EX_GemFertileHarvestComponent_Light(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_GemFertileHarvestComponent_Light.EX_GemFertileHarvestComponent_Light_C.ExecuteUbergraph_EX_GemFertileHarvestComponent_Light");

	UEX_GemFertileHarvestComponent_Light_C_ExecuteUbergraph_EX_GemFertileHarvestComponent_Light_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif