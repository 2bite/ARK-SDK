// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Bed_Simple_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Bed_Simple.PrimalItemStructure_Bed_Simple_C.ExecuteUbergraph_PrimalItemStructure_Bed_Simple
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Bed_Simple_C::ExecuteUbergraph_PrimalItemStructure_Bed_Simple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Bed_Simple.PrimalItemStructure_Bed_Simple_C.ExecuteUbergraph_PrimalItemStructure_Bed_Simple");

	UPrimalItemStructure_Bed_Simple_C_ExecuteUbergraph_PrimalItemStructure_Bed_Simple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
