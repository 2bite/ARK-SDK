// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gem_BioLum_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Gem_BioLum.PrimalItemResource_Gem_BioLum_C.ExecuteUbergraph_PrimalItemResource_Gem_BioLum
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gem_BioLum_C::ExecuteUbergraph_PrimalItemResource_Gem_BioLum(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gem_BioLum.PrimalItemResource_Gem_BioLum_C.ExecuteUbergraph_PrimalItemResource_Gem_BioLum");

	UPrimalItemResource_Gem_BioLum_C_ExecuteUbergraph_PrimalItemResource_Gem_BioLum_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
