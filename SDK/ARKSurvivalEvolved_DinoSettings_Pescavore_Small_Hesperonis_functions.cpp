// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Pescavore_Small_Hesperonis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Pescavore_Small_Hesperonis.DinoSettings_Pescavore_Small_Hesperonis_C.ExecuteUbergraph_DinoSettings_Pescavore_Small_Hesperonis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Pescavore_Small_Hesperonis_C::ExecuteUbergraph_DinoSettings_Pescavore_Small_Hesperonis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Pescavore_Small_Hesperonis.DinoSettings_Pescavore_Small_Hesperonis_C.ExecuteUbergraph_DinoSettings_Pescavore_Small_Hesperonis");

	UDinoSettings_Pescavore_Small_Hesperonis_C_ExecuteUbergraph_DinoSettings_Pescavore_Small_Hesperonis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
