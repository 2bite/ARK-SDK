// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemRaft_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemRaft.PrimalItemRaft_C.ExecuteUbergraph_PrimalItemRaft
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemRaft_C::ExecuteUbergraph_PrimalItemRaft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemRaft.PrimalItemRaft_C.ExecuteUbergraph_PrimalItemRaft");

	UPrimalItemRaft_C_ExecuteUbergraph_PrimalItemRaft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
