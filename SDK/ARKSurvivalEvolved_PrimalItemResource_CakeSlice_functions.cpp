// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_CakeSlice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_CakeSlice.PrimalItemResource_CakeSlice_C.ExecuteUbergraph_PrimalItemResource_CakeSlice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_CakeSlice_C::ExecuteUbergraph_PrimalItemResource_CakeSlice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CakeSlice.PrimalItemResource_CakeSlice_C.ExecuteUbergraph_PrimalItemResource_CakeSlice");

	UPrimalItemResource_CakeSlice_C_ExecuteUbergraph_PrimalItemResource_CakeSlice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
