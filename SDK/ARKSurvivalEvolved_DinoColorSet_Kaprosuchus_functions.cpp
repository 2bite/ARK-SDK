// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Kaprosuchus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Kaprosuchus.DinoColorSet_Kaprosuchus_C.ExecuteUbergraph_DinoColorSet_Kaprosuchus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Kaprosuchus_C::ExecuteUbergraph_DinoColorSet_Kaprosuchus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Kaprosuchus.DinoColorSet_Kaprosuchus_C.ExecuteUbergraph_DinoColorSet_Kaprosuchus");

	UDinoColorSet_Kaprosuchus_C_ExecuteUbergraph_DinoColorSet_Kaprosuchus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
