// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Silicon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Silicon.PrimalItemResource_Silicon_C.ExecuteUbergraph_PrimalItemResource_Silicon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Silicon_C::ExecuteUbergraph_PrimalItemResource_Silicon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Silicon.PrimalItemResource_Silicon_C.ExecuteUbergraph_PrimalItemResource_Silicon");

	UPrimalItemResource_Silicon_C_ExecuteUbergraph_PrimalItemResource_Silicon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
