// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_04_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04");

	UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_04_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
