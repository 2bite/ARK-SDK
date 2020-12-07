// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Wishbone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Wishbone.PrimalItemResource_Wishbone_C.ExecuteUbergraph_PrimalItemResource_Wishbone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Wishbone_C::ExecuteUbergraph_PrimalItemResource_Wishbone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Wishbone.PrimalItemResource_Wishbone_C.ExecuteUbergraph_PrimalItemResource_Wishbone");

	UPrimalItemResource_Wishbone_C_ExecuteUbergraph_PrimalItemResource_Wishbone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
