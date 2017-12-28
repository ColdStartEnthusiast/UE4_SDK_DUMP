#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow_2.WeapCrossbow_1_C
// 0x000B (0x0D83 - 0x0D78)
class AWeapCrossbow_1_C : public ADefaultRifleSetting_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D78(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	TEnumAsByte<ENUM_CrossbowState>                    CurrentState;                                             // 0x0D80(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ENUM_CrossbowState>                    LastState;                                                // 0x0D81(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bWantsToReload : 1;                                       // 0x0D82(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_2.WeapCrossbow_1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ServerSetAmmoState(TEnumAsByte<ENUM_CrossbowState> NewAmmoState);
	void ExecuteUbergraph_WeapCrossbow_2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
