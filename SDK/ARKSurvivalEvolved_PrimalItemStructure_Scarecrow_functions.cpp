// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Scarecrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Scarecrow.PrimalItemStructure_Scarecrow_C.ExecuteUbergraph_PrimalItemStructure_Scarecrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Scarecrow_C::ExecuteUbergraph_PrimalItemStructure_Scarecrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Scarecrow.PrimalItemStructure_Scarecrow_C.ExecuteUbergraph_PrimalItemStructure_Scarecrow");

	UPrimalItemStructure_Scarecrow_C_ExecuteUbergraph_PrimalItemStructure_Scarecrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
