// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ManticoreGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ManticoreGloves.PrimalItemSkin_ManticoreGloves_C.ExecuteUbergraph_PrimalItemSkin_ManticoreGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ManticoreGloves_C::ExecuteUbergraph_PrimalItemSkin_ManticoreGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ManticoreGloves.PrimalItemSkin_ManticoreGloves_C.ExecuteUbergraph_PrimalItemSkin_ManticoreGloves");

	UPrimalItemSkin_ManticoreGloves_C_ExecuteUbergraph_PrimalItemSkin_ManticoreGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
