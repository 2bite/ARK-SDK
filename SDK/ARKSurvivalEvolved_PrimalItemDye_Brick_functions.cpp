// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Brick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Brick.PrimalItemDye_Brick_C.ExecuteUbergraph_PrimalItemDye_Brick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Brick_C::ExecuteUbergraph_PrimalItemDye_Brick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Brick.PrimalItemDye_Brick_C.ExecuteUbergraph_PrimalItemDye_Brick");

	UPrimalItemDye_Brick_C_ExecuteUbergraph_PrimalItemDye_Brick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
