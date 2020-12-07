// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Lamppost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Lamppost.PrimalItemStructure_Lamppost_C.ExecuteUbergraph_PrimalItemStructure_Lamppost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Lamppost_C::ExecuteUbergraph_PrimalItemStructure_Lamppost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Lamppost.PrimalItemStructure_Lamppost_C.ExecuteUbergraph_PrimalItemStructure_Lamppost");

	UPrimalItemStructure_Lamppost_C_ExecuteUbergraph_PrimalItemStructure_Lamppost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
