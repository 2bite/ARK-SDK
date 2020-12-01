// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_EasterEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_EasterEgg.PrimalItemStructure_EasterEgg_C.ExecuteUbergraph_PrimalItemStructure_EasterEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_EasterEgg_C::ExecuteUbergraph_PrimalItemStructure_EasterEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_EasterEgg.PrimalItemStructure_EasterEgg_C.ExecuteUbergraph_PrimalItemStructure_EasterEgg");

	UPrimalItemStructure_EasterEgg_C_ExecuteUbergraph_PrimalItemStructure_EasterEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
