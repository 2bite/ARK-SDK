// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Purple_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Purple.PrimalItemDye_Purple_C.ExecuteUbergraph_PrimalItemDye_Purple
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Purple_C::ExecuteUbergraph_PrimalItemDye_Purple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Purple.PrimalItemDye_Purple_C.ExecuteUbergraph_PrimalItemDye_Purple");

	UPrimalItemDye_Purple_C_ExecuteUbergraph_PrimalItemDye_Purple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
