// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Base.DinoSettings_Base_C.ExecuteUbergraph_DinoSettings_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Base_C::ExecuteUbergraph_DinoSettings_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Base.DinoSettings_Base_C.ExecuteUbergraph_DinoSettings_Base");

	UDinoSettings_Base_C_ExecuteUbergraph_DinoSettings_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
