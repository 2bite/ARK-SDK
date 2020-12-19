// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Base.PrimalItem_Base_C.ExecuteUbergraph_PrimalItem_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Base_C::ExecuteUbergraph_PrimalItem_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Base.PrimalItem_Base_C.ExecuteUbergraph_PrimalItem_Base");

	UPrimalItem_Base_C_ExecuteUbergraph_PrimalItem_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
