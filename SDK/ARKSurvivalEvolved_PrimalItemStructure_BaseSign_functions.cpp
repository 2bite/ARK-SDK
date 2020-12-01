// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseSign_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseSign.PrimalItemStructure_BaseSign_C.ExecuteUbergraph_PrimalItemStructure_BaseSign
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseSign_C::ExecuteUbergraph_PrimalItemStructure_BaseSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseSign.PrimalItemStructure_BaseSign_C.ExecuteUbergraph_PrimalItemStructure_BaseSign");

	UPrimalItemStructure_BaseSign_C_ExecuteUbergraph_PrimalItemStructure_BaseSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
