// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_SeaMine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_SeaMine.PrimalItemStructure_SeaMine_C.ExecuteUbergraph_PrimalItemStructure_SeaMine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_SeaMine_C::ExecuteUbergraph_PrimalItemStructure_SeaMine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_SeaMine.PrimalItemStructure_SeaMine_C.ExecuteUbergraph_PrimalItemStructure_SeaMine");

	UPrimalItemStructure_SeaMine_C_ExecuteUbergraph_PrimalItemStructure_SeaMine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
