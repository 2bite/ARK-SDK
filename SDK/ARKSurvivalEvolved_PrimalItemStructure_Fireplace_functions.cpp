// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Fireplace_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Fireplace.PrimalItemStructure_Fireplace_C.ExecuteUbergraph_PrimalItemStructure_Fireplace
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Fireplace_C::ExecuteUbergraph_PrimalItemStructure_Fireplace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Fireplace.PrimalItemStructure_Fireplace_C.ExecuteUbergraph_PrimalItemStructure_Fireplace");

	UPrimalItemStructure_Fireplace_C_ExecuteUbergraph_PrimalItemStructure_Fireplace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
