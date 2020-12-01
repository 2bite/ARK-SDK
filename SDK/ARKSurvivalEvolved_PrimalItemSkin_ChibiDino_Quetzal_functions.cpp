// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Quetzal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Quetzal.PrimalItemSkin_ChibiDino_Quetzal_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Quetzal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Quetzal_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Quetzal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Quetzal.PrimalItemSkin_ChibiDino_Quetzal_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Quetzal");

	UPrimalItemSkin_ChibiDino_Quetzal_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Quetzal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
