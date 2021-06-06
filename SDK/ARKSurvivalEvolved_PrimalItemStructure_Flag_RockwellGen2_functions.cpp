// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Flag_RockwellGen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Flag_RockwellGen2.PrimalItemStructure_Flag_RockwellGen2_C.ExecuteUbergraph_PrimalItemStructure_Flag_RockwellGen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Flag_RockwellGen2_C::ExecuteUbergraph_PrimalItemStructure_Flag_RockwellGen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Flag_RockwellGen2.PrimalItemStructure_Flag_RockwellGen2_C.ExecuteUbergraph_PrimalItemStructure_Flag_RockwellGen2");

	UPrimalItemStructure_Flag_RockwellGen2_C_ExecuteUbergraph_PrimalItemStructure_Flag_RockwellGen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
