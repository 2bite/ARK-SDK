// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BirthdayShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_BirthdayShirt.PrimalItemSkin_BirthdayShirt_C.ExecuteUbergraph_PrimalItemSkin_BirthdayShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_BirthdayShirt_C::ExecuteUbergraph_PrimalItemSkin_BirthdayShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_BirthdayShirt.PrimalItemSkin_BirthdayShirt_C.ExecuteUbergraph_PrimalItemSkin_BirthdayShirt");

	UPrimalItemSkin_BirthdayShirt_C_ExecuteUbergraph_PrimalItemSkin_BirthdayShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
