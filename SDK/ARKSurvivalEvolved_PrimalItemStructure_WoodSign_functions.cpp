// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodSign_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodSign.PrimalItemStructure_WoodSign_C.ExecuteUbergraph_PrimalItemStructure_WoodSign
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodSign_C::ExecuteUbergraph_PrimalItemStructure_WoodSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodSign.PrimalItemStructure_WoodSign_C.ExecuteUbergraph_PrimalItemStructure_WoodSign");

	UPrimalItemStructure_WoodSign_C_ExecuteUbergraph_PrimalItemStructure_WoodSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
