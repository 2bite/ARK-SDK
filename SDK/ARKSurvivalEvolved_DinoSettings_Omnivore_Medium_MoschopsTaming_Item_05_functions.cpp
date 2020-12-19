// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_05_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05");

	UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_05_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
