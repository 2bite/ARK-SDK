// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DinoSpecs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_DinoSpecs.PrimalItemSkin_DinoSpecs_C.ExecuteUbergraph_PrimalItemSkin_DinoSpecs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoSpecs_C::ExecuteUbergraph_PrimalItemSkin_DinoSpecs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoSpecs.PrimalItemSkin_DinoSpecs_C.ExecuteUbergraph_PrimalItemSkin_DinoSpecs");

	UPrimalItemSkin_DinoSpecs_C_ExecuteUbergraph_PrimalItemSkin_DinoSpecs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
