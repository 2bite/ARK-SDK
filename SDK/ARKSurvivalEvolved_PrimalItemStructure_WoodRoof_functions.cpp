// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodRoof.PrimalItemStructure_WoodRoof_C.ExecuteUbergraph_PrimalItemStructure_WoodRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodRoof_C::ExecuteUbergraph_PrimalItemStructure_WoodRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodRoof.PrimalItemStructure_WoodRoof_C.ExecuteUbergraph_PrimalItemStructure_WoodRoof");

	UPrimalItemStructure_WoodRoof_C_ExecuteUbergraph_PrimalItemStructure_WoodRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
