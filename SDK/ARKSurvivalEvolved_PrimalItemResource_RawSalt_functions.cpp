// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_RawSalt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_RawSalt.PrimalItemResource_RawSalt_C.ExecuteUbergraph_PrimalItemResource_RawSalt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_RawSalt_C::ExecuteUbergraph_PrimalItemResource_RawSalt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_RawSalt.PrimalItemResource_RawSalt_C.ExecuteUbergraph_PrimalItemResource_RawSalt");

	UPrimalItemResource_RawSalt_C_ExecuteUbergraph_PrimalItemResource_RawSalt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
