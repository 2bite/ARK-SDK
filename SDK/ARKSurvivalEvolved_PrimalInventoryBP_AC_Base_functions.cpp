// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_AC_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_AC_Base.PrimalInventoryBP_AC_Base_C.ExecuteUbergraph_PrimalInventoryBP_AC_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_AC_Base_C::ExecuteUbergraph_PrimalInventoryBP_AC_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_AC_Base.PrimalInventoryBP_AC_Base_C.ExecuteUbergraph_PrimalInventoryBP_AC_Base");

	UPrimalInventoryBP_AC_Base_C_ExecuteUbergraph_PrimalInventoryBP_AC_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
