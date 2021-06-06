// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseCatwalk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseCatwalk.PrimalItemStructure_BaseCatwalk_C.ExecuteUbergraph_PrimalItemStructure_BaseCatwalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseCatwalk_C::ExecuteUbergraph_PrimalItemStructure_BaseCatwalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseCatwalk.PrimalItemStructure_BaseCatwalk_C.ExecuteUbergraph_PrimalItemStructure_BaseCatwalk");

	UPrimalItemStructure_BaseCatwalk_C_ExecuteUbergraph_PrimalItemStructure_BaseCatwalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
