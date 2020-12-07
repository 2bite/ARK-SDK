// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Pescavore_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Pescavore_Medium.DinoSettings_Pescavore_Medium_C.ExecuteUbergraph_DinoSettings_Pescavore_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Pescavore_Medium_C::ExecuteUbergraph_DinoSettings_Pescavore_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Pescavore_Medium.DinoSettings_Pescavore_Medium_C.ExecuteUbergraph_DinoSettings_Pescavore_Medium");

	UDinoSettings_Pescavore_Medium_C_ExecuteUbergraph_DinoSettings_Pescavore_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
