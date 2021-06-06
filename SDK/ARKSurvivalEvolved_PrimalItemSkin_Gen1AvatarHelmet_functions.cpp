// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Gen1AvatarHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Gen1AvatarHelmet.PrimalItemSkin_Gen1AvatarHelmet_C.ExecuteUbergraph_PrimalItemSkin_Gen1AvatarHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Gen1AvatarHelmet_C::ExecuteUbergraph_PrimalItemSkin_Gen1AvatarHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Gen1AvatarHelmet.PrimalItemSkin_Gen1AvatarHelmet_C.ExecuteUbergraph_PrimalItemSkin_Gen1AvatarHelmet");

	UPrimalItemSkin_Gen1AvatarHelmet_C_ExecuteUbergraph_PrimalItemSkin_Gen1AvatarHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
