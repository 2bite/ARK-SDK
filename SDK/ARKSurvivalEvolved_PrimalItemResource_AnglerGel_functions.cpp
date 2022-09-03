// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_AnglerGel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_AnglerGel.PrimalItemResource_AnglerGel_C.ExecuteUbergraph_PrimalItemResource_AnglerGel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_AnglerGel_C::ExecuteUbergraph_PrimalItemResource_AnglerGel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_AnglerGel.PrimalItemResource_AnglerGel_C.ExecuteUbergraph_PrimalItemResource_AnglerGel");

	UPrimalItemResource_AnglerGel_C_ExecuteUbergraph_PrimalItemResource_AnglerGel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
