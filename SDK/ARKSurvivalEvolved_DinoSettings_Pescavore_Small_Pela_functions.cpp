// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Pescavore_Small_Pela_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Pescavore_Small_Pela.DinoSettings_Pescavore_Small_Pela_C.ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Pescavore_Small_Pela_C::ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Pescavore_Small_Pela.DinoSettings_Pescavore_Small_Pela_C.ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela");

	UDinoSettings_Pescavore_Small_Pela_C_ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
