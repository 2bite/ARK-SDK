// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobePillar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobePillar.PrimalItemStructure_AdobePillar_C.ExecuteUbergraph_PrimalItemStructure_AdobePillar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobePillar_C::ExecuteUbergraph_PrimalItemStructure_AdobePillar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobePillar.PrimalItemStructure_AdobePillar_C.ExecuteUbergraph_PrimalItemStructure_AdobePillar");

	UPrimalItemStructure_AdobePillar_C_ExecuteUbergraph_PrimalItemStructure_AdobePillar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
